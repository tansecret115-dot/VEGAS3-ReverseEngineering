/* Module: sftrans1.dll
   Function: FUN_0050b3d0
   Address: 0050b3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050b3d0(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (*(HKEY *)((int)param_1 + 0x20c) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)((int)param_1 + 0x20c));
  }
  if (*(HKEY *)((int)param_1 + 0x104) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)((int)param_1 + 0x104));
  }
  free(param_1);
  return 0;
}


