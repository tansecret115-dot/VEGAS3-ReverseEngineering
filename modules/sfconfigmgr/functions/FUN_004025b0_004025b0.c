/* Module: sfconfigmgr.dll
   Function: FUN_004025b0
   Address: 004025b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004025b0(void *this,int *param_1,int *param_2)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0;
  piVar3 = *(int **)((int)this + 8);
  if ((piVar3 != (int *)0x0) && (iVar4 = 0, 0 < *piVar3)) {
    do {
      psVar1 = *(short **)(piVar3[2] + iVar4 * 4);
      if (psVar1 != (short *)0x0) {
        iVar2 = FUN_00401c60(param_1,param_2,psVar1,psVar1 + 0x28,(int *)(psVar1 + 0x228),
                             (int)(psVar1 + 0x268),(int)(psVar1 + 0x2a8));
      }
      piVar3 = *(int **)((int)this + 8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar3);
  }
  return iVar2;
}


