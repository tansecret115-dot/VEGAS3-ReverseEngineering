/* Module: vidcap30.exe
   Function: FUN_0057af30
   Address: 0057af30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057af30(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0057afb0(param_3);
  if (iVar1 == 0) {
    return 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x44);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return 1;
}


