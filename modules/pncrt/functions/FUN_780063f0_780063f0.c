/* Module: pncrt.dll
   Function: FUN_780063f0
   Address: 780063f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_780063f0(void *this,uint param_1)

{
  char *pcVar1;
  char local_3 [3];
  
  pcVar1 = local_3 + 1;
  *(undefined4 *)this = 0;
  local_3[1] = 0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffffff80;
  do {
    pcVar1 = pcVar1 + -1;
    *pcVar1 = (char)((ulonglong)param_1 % 10) + '0';
    param_1 = param_1 / 10;
  } while (param_1 != 0);
  FUN_78006c60(this,pcVar1,(int)(local_3 + (1 - (int)pcVar1)));
  return this;
}


