/* Module: vegas30.exe
   Function: FUN_00509ea0
   Address: 00509ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_00509ea0(int param_1)

{
  SHORT SVar1;
  void *_Memory;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_11c [4];
  undefined1 local_10c [260];
  uint local_8;
  
  _Memory = calloc(1,0x124);
  if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x90) != 0)) {
    FUN_005246b0(*(int *)(DAT_0064762c + 0x90));
  }
  if (_Memory != (void *)0x0) {
    uVar2 = FUN_00508c40(_Memory);
    puVar4 = local_11c;
    for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_8 = local_8 | 6;
    _SfLoadString_16(DAT_00647204,0x4f8c,local_10c,0x104);
    iVar3 = FUN_00508bd0(uVar2,local_11c);
    if (iVar3 < 0) {
      free(_Memory);
      return (void *)0x0;
    }
    iVar3 = FUN_00509e10();
    if (iVar3 == 0) {
LAB_00509f75:
      FUN_00508cc0(_Memory,0);
      FUN_00509140(_Memory,0);
      FUN_00509da0(_Memory);
      return _Memory;
    }
    if (param_1 != 0) {
      SVar1 = GetAsyncKeyState(0x10);
      if (SVar1 < 0) {
        SVar1 = GetAsyncKeyState(0x11);
        if (SVar1 < 0) goto LAB_00509f75;
      }
    }
    iVar3 = FUN_00509e50(_Memory);
    if (-1 < iVar3) {
      FUN_00509e80(_Memory);
    }
  }
  return _Memory;
}


