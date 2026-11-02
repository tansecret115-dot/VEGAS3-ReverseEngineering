/* Module: wmfplug2.dll
   Function: FUN_004158f0
   Address: 004158f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004158f0(int *param_1)

{
  int iVar1;
  int *unaff_EBP;
  int iVar2;
  ushort unaff_retaddr;
  undefined4 local_4;
  
  iVar2 = 0;
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_4);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,&DAT_0047c7b0);
    if (-1 < iVar1) {
      if (unaff_retaddr != 0) {
        do {
          if (iVar1 < 0) goto LAB_0041595c;
          iVar1 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,iVar2 + 2);
          iVar2 = iVar2 + 1;
        } while ((ushort)iVar2 < unaff_retaddr);
      }
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 0x4c))(param_1,unaff_EBP);
      }
    }
  }
LAB_0041595c:
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return iVar1;
}


