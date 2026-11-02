/* Module: mpgmux.dll
   Function: FUN_100110da
   Address: 100110da
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100110da(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_100129b4((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1001a3d4 < 2) {
        uVar3 = (byte)PTR_DAT_1001a1c0[*param_1 * 2] & 4;
        this = PTR_DAT_1001a1c0;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1001293f(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1001a3d8;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


