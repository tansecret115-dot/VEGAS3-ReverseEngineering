/* Module: erv23260.dll
   Function: FUN_637ff900
   Address: 637ff900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637ff900(void *this,int param_1,char param_2)

{
  char *pcVar1;
  
  if (*(int *)((int)this + 4) == 0) {
    pcVar1 = (char *)(*(int *)this + param_1 * 8);
    pcVar1[6] = param_2 - *pcVar1;
  }
  return;
}


