/* Module: encn3260.dll
   Function: FUN_664da100
   Address: 664da100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664da100(void *this,char *param_1,int *param_2)

{
  char *pcVar1;
  
  *param_1 = *(char *)this;
  pcVar1 = param_1 + 1;
  if (*(char *)this == '\x01') {
    *pcVar1 = *(char *)((int)this + 1);
    param_1[2] = *(char *)((int)this + 3);
    param_1[3] = *(char *)((int)this + 2);
    param_1[4] = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x18);
    param_1[5] = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x10);
    param_1[6] = (char)((uint)*(undefined4 *)((int)this + 4) >> 8);
    param_1[7] = *(char *)((int)this + 4);
    pcVar1 = param_1 + 8;
  }
  *param_2 = (int)pcVar1 - (int)param_1;
  return;
}


