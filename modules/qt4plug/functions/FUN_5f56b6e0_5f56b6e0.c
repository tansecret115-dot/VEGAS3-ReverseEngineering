/* Module: qt4plug.dll
   Function: FUN_5f56b6e0
   Address: 5f56b6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f56b6e0(HANDLE param_1,undefined4 param_2,DWORD param_3)

{
  BOOL BVar1;
  
  FUN_5f56b5d0(param_1);
  BVar1 = WriteFile(param_1,&param_2,4,&param_3,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


