/* Module: rmbe3260.dll
   Function: FUN_6604d0f0
   Address: 6604d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_6604d0f0(ushort *param_1,undefined2 *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_6604d2e0((ushort)DAT_6606ecb8,DAT_6606ecbc,DAT_66075328,DAT_6607532c,DAT_6606ecc4,
                       DAT_6606ecc0,(ushort *)&DAT_66075324);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  uVar1 = (ushort)((ulonglong)(DAT_66075324 & 0xffff) /
                  (ulonglong)(longlong)(int)(_DAT_6606ecc0 & 0xffff));
  _DAT_66075320 = CONCAT22(DAT_66075320_2,uVar1);
  if (DAT_66075330 == (undefined4 *)0x0) {
    DAT_66075330 = malloc((uint)uVar1 << 2);
  }
  DAT_66075334 = DAT_66075334 + 1;
  if (DAT_66075330 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar4 = DAT_66075330;
  for (uVar3 = _DAT_66075320 & 0xffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0x1010101;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar4 = 1;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *param_1 = DAT_6606ecc0;
  *param_2 = DAT_66075320;
  return 0;
}


