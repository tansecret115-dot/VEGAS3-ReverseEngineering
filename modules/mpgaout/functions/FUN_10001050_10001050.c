/* Module: mpgaout.dll
   Function: FUN_10001050
   Address: 10001050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10001050(int param_1,char *param_2)

{
  char local_10c [268];
  
  vsprintf(local_10c,param_2,&stack0x0000000c);
  if (*(code **)(param_1 + 0x44e14) != (code *)0x0) {
    (**(code **)(param_1 + 0x44e14))(local_10c);
  }
  return;
}


