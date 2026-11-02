/* Module: vidcap30.exe
   Function: FUN_0054f600
   Address: 0054f600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0054f600(int param_1)

{
  int iVar1;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x18) < 0) {
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    *(uint *)(iVar1 + 4) = (-(uint)(*(int *)(iVar1 + 0x18) != 0) & 0x47) + 0x2a;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(iVar1 + 0x1e) = 0;
    FUN_0055cf20(iVar1);
    FUN_0054fd10(iVar1);
    return 0;
  }
  return 0xfffffffe;
}


