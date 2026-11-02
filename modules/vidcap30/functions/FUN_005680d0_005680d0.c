/* Module: vidcap30.exe
   Function: FUN_005680d0
   Address: 005680d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005680d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1[8] + 0x51);
  uVar2 = (*(code *)puVar1[3])(param_1[8]);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar2 = *puVar1;
  *param_1 = uVar2;
  param_1[1] = puVar1[1];
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


