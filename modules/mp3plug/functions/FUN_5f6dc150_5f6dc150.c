/* Module: mp3plug.dll
   Function: FUN_5f6dc150
   Address: 5f6dc150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_5f6dc150(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  double dVar6;
  uint uStack_54;
  uint uStack_50;
  uint uStack_44;
  uint uStack_40;
  
  puVar3 = (undefined1 *)FUN_5f6d9760(0x10);
  uVar1 = _DAT_5f75ce60;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 3;
    *(undefined8 *)(puVar3 + 8) = uVar1;
    puVar3[1] = 2;
    puVar5 = puVar3;
    do {
      dVar6 = fmod(_DAT_5f75ce68,_DAT_5f75ce70);
      uStack_50 = (uint)((ulonglong)dVar6 >> 0x20);
      uStack_54 = SUB84(dVar6,0);
      uVar4 = uStack_50 >> 0x14 & 0x7ff;
      if (uVar4 < 0x3ff) {
        cVar2 = '\0';
      }
      else {
        cVar2 = (char)((uStack_50 << 0xb | uStack_54 >> 0x15 | 0x80000000) >>
                      (0x1eU - (char)uVar4 & 0x1f));
        if ((longlong)dVar6 < 0) {
          cVar2 = -cVar2;
        }
      }
      puVar5[2] = cVar2;
      puVar5 = puVar5 + 1;
    } while ((int)puVar5 < (int)(puVar3 + 4));
    dVar6 = fmod(_DAT_5f75ce78,_DAT_5f75ce80);
    uStack_40 = (uint)((ulonglong)dVar6 >> 0x20);
    uStack_44 = SUB84(dVar6,0);
    uVar4 = uStack_40 >> 0x14 & 0x7ff;
    if (uVar4 < 0x3ff) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (char)((uStack_40 << 0xb | uStack_44 >> 0x15 | 0x80000000) >>
                    (0x1eU - (char)uVar4 & 0x1f));
      if ((longlong)dVar6 < 0) {
        cVar2 = -cVar2;
      }
    }
    puVar3[6] = cVar2;
    return puVar3;
  }
  return (undefined1 *)0x0;
}


