/* Module: vidcap30.exe
   Function: FUN_0057db00
   Address: 0057db00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_0057db00(int param_1,int *param_2)

{
  int unaff_ESI;
  
  (**(code **)(*param_2 + 0x24))(param_2,&param_2);
  return (unaff_ESI != *(int *)(param_1 + 0x1c)) - 1 & 0x80040208;
}


