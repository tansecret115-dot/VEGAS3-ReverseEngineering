/* Module: mp3plug.dll
   Function: FUN_5f69a720
   Address: 5f69a720
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5f69a720(void *this,char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  for (; (param_1 != (char *)0x0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)(iVar1 + param_4) = *param_1;
    param_4 = param_4 + 1;
  }
  *(undefined1 *)(iVar1 + param_4) = 0;
  return param_4 + 1;
}


