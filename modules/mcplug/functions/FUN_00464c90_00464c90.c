/* Module: mcplug.dll
   Function: FUN_00464c90
   Address: 00464c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00464c90(HANDLE param_1,undefined4 param_2,DWORD param_3)

{
  BOOL BVar1;
  
  FUN_00464b80(param_1);
  BVar1 = WriteFile(param_1,&param_2,4,&param_3,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


