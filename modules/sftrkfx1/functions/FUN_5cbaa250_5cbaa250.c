/* Module: sftrkfx1.dll
   Function: FUN_5cbaa250
   Address: 5cbaa250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaa250(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_4;
  iVar3 = param_3;
  puVar2 = param_1;
  if (((((param_1[0x15] & 0x10) == 0) && ((int)param_1[3] <= param_3)) &&
      (param_3 <= (int)param_1[5])) &&
     (((uint)param_1[0x16] < (uint)param_1[0x20] &&
      (iVar5 = param_1[param_1[0x16] + 0x21], iVar5 != 0)))) {
    param_1 = (undefined4 *)FUN_5cba9ee0((int)param_1,iVar5,param_3,param_4);
    if (param_1 < *(undefined4 **)(iVar5 + 0x28)) {
      FUN_5cbaa240();
      if ((((param_2 & 4) != 0) && (param_1 != (undefined4 *)0x0)) &&
         (param_1 < (undefined4 *)(*(int *)(iVar5 + 0x28) - 1U))) {
        FUN_5cba9e60((int)puVar2,iVar5,(uint)param_1);
        FUN_5cbaa380(puVar2);
        FUN_5cbaa3a0(puVar2);
        return;
      }
      puVar1 = (undefined4 *)((int)param_1 * 0x20 + 0x44 + iVar5);
      if (*(int *)((int)param_1 * 0x20 + 0x44 + iVar5) != 0) {
        *puVar1 = 0;
        *(undefined4 *)((int)param_1 * 0x20 + 0x34 + iVar5) = 0;
        FUN_5cbaa380(puVar2);
        FUN_5cbaa3a0(puVar2);
        return;
      }
      *puVar1 = 1;
      FUN_5cbaa380(puVar2);
      FUN_5cbaa3a0(puVar2);
      return;
    }
    iVar5 = FUN_5cbaa3b0((int)puVar2,iVar5,iVar3,iVar4,(int *)&param_1,(undefined4 *)0x0);
    if (iVar5 != 0) {
      FUN_5cbaa160(puVar2,param_2 | 4,iVar3,iVar4);
    }
  }
  return;
}


