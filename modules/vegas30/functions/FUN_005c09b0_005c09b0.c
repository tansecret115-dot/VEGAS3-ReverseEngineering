/* Module: vegas30.exe
   Function: FUN_005c09b0
   Address: 005c09b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c09b0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined1 *unaff_EBX;
  SIZE_T unaff_EDI;
  undefined4 unaff_retaddr;
  undefined1 local_8 [4];
  undefined4 uStack_4;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_8,8,&param_1);
  if (-1 < iVar2) {
    if (unaff_EBX == &DAT_00000008) {
      pvVar3 = GlobalAlloc(2,unaff_EDI);
      unaff_EBX = GlobalLock(pvVar3);
      if (unaff_EBX == (undefined1 *)0x0) {
        return -0x7ff8fff2;
      }
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,unaff_EBX,unaff_EDI,&stack0xfffffff4);
      if (-1 < iVar2) {
        if (unaff_EDI == 8) {
          iVar2 = FUN_005d2530(uStack_4,unaff_EBX,unaff_retaddr,param_1,8,param_2);
          if (iVar2 < 0) {
            iVar2 = -0x7ffb1f7c;
          }
        }
        else {
          iVar2 = -0x7ffb1ff8;
        }
      }
    }
    else {
      iVar2 = -0x7ffb1ff8;
    }
  }
  if (unaff_EBX != (undefined1 *)0x0) {
    pvVar3 = GlobalHandle(unaff_EBX);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(unaff_EBX);
    GlobalFree(pvVar3);
  }
  return iVar2;
}


