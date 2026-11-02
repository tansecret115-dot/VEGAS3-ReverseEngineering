/* Module: vegas30.exe
   Function: FUN_00578a50
   Address: 00578a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00578b07) */
/* WARNING: Removing unreachable block (ram,0x00578b18) */
/* WARNING: Removing unreachable block (ram,0x00578b2f) */
/* WARNING: Removing unreachable block (ram,0x00578b68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00578a50(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int *unaff_EBX;
  int iVar1;
  int iVar2;
  int iStack_c;
  int *local_8;
  undefined1 auStack_4 [4];
  
  iVar1 = 0;
  if ((param_2 != (int *)0x0) && (DAT_00659e5c == 0)) {
    local_8 = (int *)0x0;
    iVar1 = (**(code **)(*param_2 + 0x30))(param_2,&local_8);
    if ((-1 < iVar1) && (local_8 != (int *)0x0)) {
      iVar1 = (**(code **)(*local_8 + 0x20))(local_8,auStack_4);
      if ((-1 < iVar1) && (0 < iStack_c)) {
        iVar2 = 0;
        DAT_00659e60 = DAT_00659e60 + 1;
        if (0 < iStack_c) {
          do {
            Ordinal_6(0);
            iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0,iVar2,auStack_4);
            (**(code **)(_DAT_00000000 + 8))(0);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iStack_c);
        }
        DAT_00659e60 = DAT_00659e60 + -1;
        Ordinal_6(0);
      }
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
  }
  if (DAT_00659e60 == 0) {
    if (DAT_00659e5c == 0) {
      *param_3 = 0;
    }
    DAT_00659e5c = 0;
  }
  Ordinal_6(param_1);
  return iVar1;
}


