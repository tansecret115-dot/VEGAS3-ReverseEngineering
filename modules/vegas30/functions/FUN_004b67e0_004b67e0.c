/* Module: vegas30.exe
   Function: FUN_004b67e0
   Address: 004b67e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b67e0(HWND param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  
  GetParent(param_1);
  iVar1 = *param_2;
  bVar2 = *(char *)(iVar1 + 8000) != '\0';
  if (*(char *)(iVar1 + 0x2088) != '\0') {
    bVar2 = bVar2 | 2;
  }
  if (*(char *)(iVar1 + 0x21b0) != '\0') {
    bVar2 = bVar2 | 8;
  }
  iVar1 = FUN_004b51d0(param_1,bVar2,param_2);
  if (iVar1 != 0) {
    FUN_004b6570(param_1,param_2);
    FUN_004b5e50(param_1,param_2);
    FUN_004b5520(param_1,param_2);
    FUN_004b5720(param_1,param_2);
    FUN_004b59b0(param_1,param_2);
    return 1;
  }
  return 0;
}


