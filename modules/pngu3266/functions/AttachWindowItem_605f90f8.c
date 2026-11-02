/* Module: pngu3266.dll
   Function: AttachWindowItem
   Address: 605f90f8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::AttachWindowItem(unsigned long,class CPNWindow *) */

int __thiscall CPNWindow::AttachWindowItem(CPNWindow *this,ulong param_1,CPNWindow *param_2)

{
  HWND__ *hDlg;
  HWND hWnd;
  int iVar1;
  undefined4 *puVar2;
  CHAR local_12c;
  undefined4 local_12b;
  HWND local_28 [9];
  
                    /* 0x90f8  823  ?AttachWindowItem@CPNWindow@@UAEHKPAV1@@Z */
  hDlg = GetHWND(param_2);
  hWnd = GetDlgItem(hDlg,param_1);
  iVar1 = 0;
  if (hWnd != (HWND)0x0) {
    *(CPNWindow **)(this + 0x48) = param_2;
    AddChild(param_2,this);
    local_12c = DAT_60649ac0;
    puVar2 = &local_12b;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = 0;
    *(undefined1 *)((int)puVar2 + 2) = 0;
    GetClassNameA(hWnd,&local_12c,0x104);
    local_28[0] = hWnd;
    iVar1 = (**(code **)(*(int *)this + 0xcc))(local_28);
  }
  return iVar1;
}


