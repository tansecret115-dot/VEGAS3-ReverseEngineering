/* Module: rmme3260.dll
   Function: FUN_6624e780
   Address: 6624e780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624e780(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x448) & 0x20) != 0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x8b4) + 0x84))
                      (*(int **)(param_1 + 0x8b4),0,*(undefined4 *)(param_1 + 0x8b0),0,0x200,0);
    return uVar1;
  }
  return 0x80004005;
}


