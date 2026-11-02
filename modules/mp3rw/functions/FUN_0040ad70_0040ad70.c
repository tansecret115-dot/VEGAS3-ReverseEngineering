/* Module: mp3rw.dll
   Function: FUN_0040ad70
   Address: 0040ad70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040aed0) */

HGDIOBJ FUN_0040ad70(HWND param_1,uint param_2,HDC param_3,HWND param_4)

{
  uint *puVar1;
  LONG LVar2;
  HWND hWnd;
  int iVar3;
  uint uVar4;
  HGDIOBJ pvVar5;
  UINT Msg;
  WPARAM wParam;
  
  LVar2 = GetWindowLongA(param_1,-0x15);
  puVar1 = DAT_004a84e0;
  pvVar5 = (HGDIOBJ)0x0;
  if (LVar2 == 0) {
    if (param_2 == 0x110) {
      pvVar5 = (HGDIOBJ)FUN_0040ab70(param_1,(int)param_4);
      return pvVar5;
    }
  }
  else if (param_2 < 0x112) {
    if (param_2 == 0x111) {
      if ((short)param_3 == 0x4cb) {
        FUN_0041deb0(DAT_004a811c,(LPCSTR)0x37b,param_1,FUN_0040aa10,LVar2);
        return (HGDIOBJ)0x0;
      }
    }
    else {
      if (param_2 == 0xf) {
        FUN_004048c0(param_1,LVar2);
        return (HGDIOBJ)0x0;
      }
      if (param_2 == 0x4e) {
        switch(param_4[2].unused) {
        case -0xd1:
          iVar3 = FUN_00406b40(param_1,LVar2);
          SetWindowLongA(param_1,0,(uint)(iVar3 != 6));
          return (HGDIOBJ)0x1;
        case -0xcf:
          FUN_00404bc0(param_1,(int)DAT_004a84e0);
          FUN_00402d60(puVar1);
          *(undefined4 *)(LVar2 + 0x220) = 0;
          FUN_00404070((BYTE *)puVar1);
          FUN_00405be0(param_1,LVar2,0x1f5f);
          return (HGDIOBJ)0x1;
        case -0xce:
          FUN_00405c10(param_1,LVar2);
          *(undefined4 *)(LVar2 + 0x220) = 0;
          iVar3 = FUN_00405cb0(param_1,LVar2);
          if ((iVar3 == 0x1b7d) || (iVar3 == 0x1b7e)) {
            if ((*(int *)(LVar2 + 0x240) == 1) || (*(int *)(LVar2 + 0x240) != 2)) {
              *(undefined4 *)(LVar2 + 0x228) = 0;
              *(undefined4 *)(LVar2 + 0x22c) = 0;
              *(undefined4 *)(LVar2 + 0x230) = 1;
            }
            else {
              *(undefined4 *)(LVar2 + 0x230) = 0;
              *(undefined4 *)(LVar2 + 0x228) = 1;
              *(undefined4 *)(LVar2 + 0x22c) = 1;
            }
            lstrcpynA(&DAT_004a82d5,&DAT_004a8255,0x80);
            DAT_004a8354 = 0;
          }
          pvVar5 = (HGDIOBJ)0x1;
          break;
        case -0xcb:
          FUN_00406a60(LVar2);
          return (HGDIOBJ)0x0;
        case -200:
          uVar4 = *(int *)(LVar2 + 0x1cc) != 0 | 2;
          wParam = 0;
          Msg = 0x470;
          hWnd = GetParent(param_1);
          PostMessageA(hWnd,Msg,wParam,uVar4);
          return (HGDIOBJ)0x0;
        }
      }
    }
  }
  else if (param_2 == 0x138) {
    iVar3 = GetDlgCtrlID(param_4);
    uVar4 = FUN_00405f90(iVar3);
    if ((*(uint *)(LVar2 + 0x220) & uVar4) != 0) {
      SetTextColor(param_3,0xff);
      SetBkMode(param_3,1);
      pvVar5 = GetStockObject(5);
      return pvVar5;
    }
  }
  return pvVar5;
}


