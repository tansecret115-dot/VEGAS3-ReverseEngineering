/* Module: rmbe3260.dll
   Function: FUN_660390f0
   Address: 660390f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_660390f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4e) + 0x4e;
  if (*(char *)(param_1 + 0x49) != '\0') {
    iVar1 = iVar1 + ((uint)*(ushort *)(param_1 + 0x2a) / (uint)*(ushort *)(param_1 + 0x2c)) *
                    (uint)*(ushort *)(param_1 + 0x28) * 2;
  }
  return iVar1;
}


