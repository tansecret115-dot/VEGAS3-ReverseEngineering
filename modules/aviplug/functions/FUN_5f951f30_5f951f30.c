/* Module: aviplug.dll
   Function: FUN_5f951f30
   Address: 5f951f30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f951f30(uint param_1,uint *param_2)

{
  HGLOBAL hMem;
  uint *puVar1;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    return (uint *)0xffffffff;
  }
  if (*param_2 < 0x24) {
    return (uint *)0x0;
  }
  if (param_2[1] == 0x63646976) {
    uVar2 = param_2[2];
    if (param_1 == 0) {
      param_1 = uVar2;
      if ((((uVar2 != 0x64737664) && (uVar2 != 0x6e76645f)) && (uVar2 != 0x6e766477)) &&
         ((uVar2 != 0x7076645f && (uVar2 != 0x70766477)))) {
LAB_5f952035:
        param_2[5] = 0xfffffffe;
        return (uint *)0x0;
      }
    }
    else if (param_1 != uVar2) goto LAB_5f952035;
    if ((param_2[4] & (uVar2 != 0x64737664) + 6) == param_2[4]) {
      hMem = GlobalAlloc(0x42,0x48);
      puVar1 = GlobalLock(hMem);
      if (puVar1 == (uint *)0x0) {
        param_2[5] = 0xfffffffd;
        return (uint *)0x0;
      }
      *puVar1 = param_1;
      puVar1[1] = param_2[4];
      if ((param_1 == 0x6e766477) || (param_1 == 0x70766477)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      puVar1[2] = uVar2;
      if ((param_1 == 0x7076645f) || (param_1 == 0x70766477)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      puVar1[3] = uVar2;
      param_2[5] = 0;
      InterlockedIncrement((LONG *)&DAT_5f9f419c);
      return puVar1;
    }
  }
  param_2[5] = 0xffffffff;
  return (uint *)0x0;
}


