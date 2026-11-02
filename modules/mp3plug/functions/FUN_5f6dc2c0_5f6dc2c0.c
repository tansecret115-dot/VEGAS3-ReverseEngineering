/* Module: mp3plug.dll
   Function: FUN_5f6dc2c0
   Address: 5f6dc2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6dc2c0(int param_1,int param_2,float param_3)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_48;
  
  fVar1 = (float)param_2 / param_3 + (float)*(double *)(param_1 + 8);
  *(double *)(param_1 + 8) = (double)fVar1;
  local_48 = (double)(fVar1 * (float)_DAT_5f75ce88);
  iVar4 = param_1;
  do {
    dVar5 = fmod(local_48,_DAT_5f75ce90);
    local_48 = _DAT_5f75ce98 * local_48;
    uStack_64 = (uint)((ulonglong)dVar5 >> 0x20);
    local_68 = SUB84(dVar5,0);
    uVar3 = uStack_64 >> 0x14 & 0x7ff;
    if (uVar3 < 0x3ff) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (char)((uStack_64 << 0xb | local_68 >> 0x15 | 0x80000000) >>
                    (0x1eU - (char)uVar3 & 0x1f));
      if ((longlong)dVar5 < 0) {
        cVar2 = -cVar2;
      }
    }
    *(char *)(iVar4 + 2) = cVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < param_1 + 4);
  dVar5 = fmod(local_48,_DAT_5f75cea0);
  uStack_54 = (uint)((ulonglong)dVar5 >> 0x20);
  local_58 = SUB84(dVar5,0);
  uVar3 = uStack_54 >> 0x14 & 0x7ff;
  if (uVar3 < 0x3ff) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (char)((uStack_54 << 0xb | local_58 >> 0x15 | 0x80000000) >>
                  (0x1eU - (char)uVar3 & 0x1f));
    if ((longlong)dVar5 < 0) {
      cVar2 = -cVar2;
    }
  }
  *(char *)(param_1 + 6) = cVar2;
  return;
}


