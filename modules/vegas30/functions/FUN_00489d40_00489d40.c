/* Module: vegas30.exe
   Function: FUN_00489d40
   Address: 00489d40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00489d40(int param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  
  if (param_2 != 0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0xf8) != 0) {
      puVar2 = (ushort *)(*(int *)(param_1 + 0xf4) + 8);
      do {
        if (param_2 == *puVar2) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 8;
      } while (uVar1 < *(uint *)(param_1 + 0xf8));
    }
  }
  return 0xffff;
}


