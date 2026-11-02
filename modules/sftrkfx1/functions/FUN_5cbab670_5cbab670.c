/* Module: sftrkfx1.dll
   Function: FUN_5cbab670
   Address: 5cbab670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbab670(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x50) & 0xff;
  if ((uVar2 != 3) && (uVar2 != 1)) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x58) < *(uint *)(param_1 + 0x80)) &&
     (iVar1 = *(int *)(param_1 + 0x84 + *(uint *)(param_1 + 0x58) * 4), iVar1 != 0)) {
    FUN_5cba9ee0(param_1,iVar1,param_2,param_3);
    return 1;
  }
  return 0;
}


