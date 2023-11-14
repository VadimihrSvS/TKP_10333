using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;
using Lb3AutoSrv10333Lib;

namespace ClientSh
{
	class Program
	{
		static void Main(string[] args)
		{
			float x;
			double y;
			var obj = new MyMath();
			IMyMath pimymath = obj;
			int res1 = pimymath.Fun91(4, 5);
			pimymath.Fun92(6.0f, 7.0f, out x);
			pimymath.Fun93(1.1, out y);

			Console.WriteLine("Клиентское приложение С# Соколовский В.С. 10333гр.\nFun91(4, 5) = " + res1 + "\nFun92(6.0f, 7.0f, out x) = " + x + "\nFun93(1.1, out y) = " + y);

			Console.ReadLine();

			Marshal.ReleaseComObject(pimymath);
		}
	}
}
