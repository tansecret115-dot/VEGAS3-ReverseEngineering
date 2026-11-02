/* Module: rnco3260.dll
   Function: FUN_63700620
   Address: 63700620
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63700620(undefined1 *param_1,uint param_2,ushort *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  
  puVar3 = param_1;
  for (; ((((uint)puVar3 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar1 = (uint)*param_3;
    param_3 = param_3 + 1;
    *puVar3 = (&DAT_63795aa0)
              [(uVar1 & 0x1e | (uVar1 & 0x3c0) >> 1) >> 1 | ((uVar1 & 0x7800) >> 7) << 4];
    puVar3 = puVar3 + 1;
  }
  if (3 < (int)param_2) {
    param_1 = (undefined1 *)(param_2 >> 2);
    puVar2 = puVar3;
    puVar4 = param_3;
    do {
      puVar3 = puVar2 + 4;
      uVar1 = (uint)*puVar4;
      param_3 = puVar4 + 4;
      param_2 = param_2 - 4;
      *puVar2 = (&DAT_63795aa0)
                [(uVar1 & 0x1e | (uVar1 & 0x3c0) >> 1) >> 1 | ((uVar1 & 0x7800) >> 7) << 4];
      uVar1 = (uint)puVar4[1];
      puVar2[1] = (&DAT_63795aa0)
                  [(uVar1 & 0x1e | (uVar1 & 0x3c0) >> 1) >> 1 | ((uVar1 & 0x7800) >> 7) << 4];
      uVar1 = (uint)puVar4[2];
      puVar2[2] = (&DAT_63795aa0)
                  [(uVar1 & 0x1e | (uVar1 & 0x3c0) >> 1) >> 1 | ((uVar1 & 0x7800) >> 7) << 4];
      uVar1 = (uint)puVar4[3];
      puVar2[3] = (&DAT_63795aa0)
                  [(uVar1 & 0x1e | (uVar1 & 0x3c0) >> 1) >> 1 | ((uVar1 & 0x7800) >> 7) << 4];
      param_1 = param_1 + -1;
      puVar2 = puVar3;
      puVar4 = param_3;
    } while (param_1 != (undefined1 *)0x0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = (uint)*param_3;
    param_3 = param_3 + 1;
    *puVar3 = (&DAT_63795aa0)
              [(uVar1 & 0x1e | (uVar1 & 0x3c0) >> 1) >> 1 | ((uVar1 & 0x7800) >> 7) << 4];
    puVar3 = puVar3 + 1;
  }
  return;
}


