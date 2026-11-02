/* Module: encn3260.dll
   Function: FUN_664830e0
   Address: 664830e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664830e0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)param_1[5];
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)((int)param_1 + 0x8a) = param_2;
    return 0;
  }
  param_1 = (int *)0x0;
  iVar2 = (**(code **)*puVar1)(puVar1,&DAT_664ddb30,&param_1);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
    (**(code **)(*param_1 + 8))(param_1);
    return uVar3;
  }
  return 0;
}


