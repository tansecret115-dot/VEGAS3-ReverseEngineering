/* Module: rmto3260.dll
   Function: FUN_66300310
   Address: 66300310
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_66300310(ushort *param_1,undefined2 *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_66300500(DAT_66311aa0,DAT_66311aa4,DAT_66311d84,DAT_66311d88,DAT_66311aac,DAT_66311aa8
                       ,(ushort *)&DAT_66311d80);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  uVar1 = (ushort)((ulonglong)(DAT_66311d80 & 0xffff) /
                  (ulonglong)(longlong)(int)(_DAT_66311aa8 & 0xffff));
  _DAT_66311d7c = CONCAT22(DAT_66311d7c_2,uVar1);
  if (DAT_66311d8c == (undefined4 *)0x0) {
    DAT_66311d8c = malloc((uint)uVar1 << 2);
  }
  DAT_66311d90 = DAT_66311d90 + 1;
  if (DAT_66311d8c == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar4 = DAT_66311d8c;
  for (uVar3 = _DAT_66311d7c & 0xffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0x1010101;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar4 = 1;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *param_1 = DAT_66311aa8;
  *param_2 = DAT_66311d7c;
  return 0;
}


