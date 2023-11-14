<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Форма переопределяет dispose для очистки списка компонентов.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Является обязательной для конструктора форм Windows Forms
    Private components As System.ComponentModel.IContainer

    'Примечание: следующая процедура является обязательной для конструктора форм Windows Forms
    'Для ее изменения используйте конструктор форм Windows Form.  
    'Не изменяйте ее в редакторе исходного кода.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.txtOp1 = New System.Windows.Forms.TextBox()
        Me.txtOp2 = New System.Windows.Forms.TextBox()
        Me.txtOp3 = New System.Windows.Forms.TextBox()
        Me.Bt_Late = New System.Windows.Forms.Button()
        Me.Bt_ID = New System.Windows.Forms.Button()
        Me.Bt_Vtbl = New System.Windows.Forms.Button()
        Me.txtTime1 = New System.Windows.Forms.TextBox()
        Me.txtTime2 = New System.Windows.Forms.TextBox()
        Me.txtTime3 = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'txtOp1
        '
        Me.txtOp1.Location = New System.Drawing.Point(52, 43)
        Me.txtOp1.Name = "txtOp1"
        Me.txtOp1.Size = New System.Drawing.Size(100, 20)
        Me.txtOp1.TabIndex = 0
        Me.txtOp1.Text = "5"
        '
        'txtOp2
        '
        Me.txtOp2.Location = New System.Drawing.Point(240, 43)
        Me.txtOp2.Name = "txtOp2"
        Me.txtOp2.Size = New System.Drawing.Size(100, 20)
        Me.txtOp2.TabIndex = 1
        Me.txtOp2.Text = "10"
        '
        'txtOp3
        '
        Me.txtOp3.Location = New System.Drawing.Point(446, 43)
        Me.txtOp3.Name = "txtOp3"
        Me.txtOp3.Size = New System.Drawing.Size(100, 20)
        Me.txtOp3.TabIndex = 2
        '
        'Bt_Late
        '
        Me.Bt_Late.Location = New System.Drawing.Point(52, 132)
        Me.Bt_Late.Name = "Bt_Late"
        Me.Bt_Late.Size = New System.Drawing.Size(134, 26)
        Me.Bt_Late.TabIndex = 3
        Me.Bt_Late.Text = "Late Binding"
        Me.Bt_Late.UseVisualStyleBackColor = True
        '
        'Bt_ID
        '
        Me.Bt_ID.Location = New System.Drawing.Point(52, 198)
        Me.Bt_ID.Name = "Bt_ID"
        Me.Bt_ID.Size = New System.Drawing.Size(134, 26)
        Me.Bt_ID.TabIndex = 4
        Me.Bt_ID.Text = "Id Binding"
        Me.Bt_ID.UseVisualStyleBackColor = True
        '
        'Bt_Vtbl
        '
        Me.Bt_Vtbl.Location = New System.Drawing.Point(52, 266)
        Me.Bt_Vtbl.Name = "Bt_Vtbl"
        Me.Bt_Vtbl.Size = New System.Drawing.Size(134, 26)
        Me.Bt_Vtbl.TabIndex = 5
        Me.Bt_Vtbl.Text = "Vtbl Binding"
        Me.Bt_Vtbl.UseVisualStyleBackColor = True
        '
        'txtTime1
        '
        Me.txtTime1.Location = New System.Drawing.Point(256, 136)
        Me.txtTime1.Name = "txtTime1"
        Me.txtTime1.Size = New System.Drawing.Size(200, 20)
        Me.txtTime1.TabIndex = 6
        '
        'txtTime2
        '
        Me.txtTime2.Location = New System.Drawing.Point(256, 202)
        Me.txtTime2.Name = "txtTime2"
        Me.txtTime2.Size = New System.Drawing.Size(200, 20)
        Me.txtTime2.TabIndex = 7
        '
        'txtTime3
        '
        Me.txtTime3.Location = New System.Drawing.Point(256, 270)
        Me.txtTime3.Name = "txtTime3"
        Me.txtTime3.Size = New System.Drawing.Size(200, 20)
        Me.txtTime3.TabIndex = 8
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(800, 450)
        Me.Controls.Add(Me.txtTime3)
        Me.Controls.Add(Me.txtTime2)
        Me.Controls.Add(Me.txtTime1)
        Me.Controls.Add(Me.Bt_Vtbl)
        Me.Controls.Add(Me.Bt_ID)
        Me.Controls.Add(Me.Bt_Late)
        Me.Controls.Add(Me.txtOp3)
        Me.Controls.Add(Me.txtOp2)
        Me.Controls.Add(Me.txtOp1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents txtOp1 As TextBox
    Friend WithEvents txtOp2 As TextBox
    Friend WithEvents txtOp3 As TextBox
    Friend WithEvents Bt_Late As Button
    Friend WithEvents Bt_ID As Button
    Friend WithEvents Bt_Vtbl As Button
    Friend WithEvents txtTime1 As TextBox
    Friend WithEvents txtTime2 As TextBox
    Friend WithEvents txtTime3 As TextBox
End Class
