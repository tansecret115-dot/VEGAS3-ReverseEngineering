/* Module: mp3plug.dll
   Function: FUN_5f726570
   Address: 5f726570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f726570(void *this,LPSTR param_1,uint param_2,int param_3)

{
  char cVar1;
  void *extraout_ECX;
  uint uVar2;
  undefined4 extraout_ECX_00;
  
  if (param_3 == 0) {
    CharUpperA(param_1);
    this = extraout_ECX;
  }
  cVar1 = *param_1;
  uVar2 = CONCAT31((int3)((uint)this >> 8),cVar1);
  while (cVar1 != '\0') {
    param_2 = FUN_5f726500(uVar2,param_2);
    cVar1 = param_1[1];
    uVar2 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),cVar1);
    param_1 = param_1 + 1;
  }
  return;
}


