/* Module: sfs4rw.dll
   Function: FUN_004749a0
   Address: 004749a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004749a0(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00474620(param_1,param_2);
  FUN_00474640(param_1,*(int *)((int)param_1 + 0x71) * 3 + 8);
  if ((0xffff < *(int *)((int)param_1 + 0x59)) || (0xffff < *(int *)((int)param_1 + 0x55))) {
    *(undefined4 *)(*param_1 + 0x14) = 0x28;
    *(undefined4 *)(*param_1 + 0x18) = 0xffff;
    (**(code **)*param_1)(param_1);
  }
  FUN_004745e0(param_1,(char)*(undefined4 *)((int)param_1 + 0x6d));
  FUN_00474640(param_1,*(undefined4 *)((int)param_1 + 0x59));
  FUN_00474640(param_1,*(undefined4 *)((int)param_1 + 0x55));
  FUN_004745e0(param_1,(char)*(undefined4 *)((int)param_1 + 0x71));
  puVar2 = *(undefined4 **)((int)param_1 + 0x79);
  iVar1 = 0;
  if (0 < *(int *)((int)param_1 + 0x71)) {
    do {
      FUN_004745e0(param_1,(char)*puVar2);
      FUN_004745e0(param_1,(char)puVar2[2] * '\x10' + (char)puVar2[3]);
      FUN_004745e0(param_1,(char)puVar2[4]);
      iVar1 = iVar1 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 0x51);
    } while (iVar1 < *(int *)((int)param_1 + 0x71));
  }
  return;
}


