/* Module: vegas30.exe
   Function: FUN_00453970
   Address: 00453970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00453a11) */
/* WARNING: Removing unreachable block (ram,0x00453a1d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453970(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = CONCAT44(param_3,param_2);
  if ((DAT_006476d0 != 0) && ((param_4 & 8) != 0)) {
    uVar1 = *(uint *)(param_1 + 400);
    iVar2 = *(int *)(param_1 + 0x194);
    lVar4 = lVar3;
    if (_DAT_00610fd8 != *(double *)(param_1 + 0x1c0)) {
      ftol();
      lVar4 = ftol();
    }
    if ((CONCAT44((param_3 - iVar2) - (uint)(param_2 < uVar1),param_2 - uVar1) <= lVar4) &&
       (lVar4 <= CONCAT44(iVar2 + param_3 + (uint)CARRY4(uVar1,param_2),uVar1 + param_2))) {
      lVar3 = lVar4;
    }
  }
  FUN_00453340(param_1,lVar3,0,0,param_4);
  return;
}


