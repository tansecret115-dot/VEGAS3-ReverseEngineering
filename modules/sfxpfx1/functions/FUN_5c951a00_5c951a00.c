/* Module: sfxpfx1.dll
   Function: FUN_5c951a00
   Address: 5c951a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c951a00(void *this,int *param_1)

{
  ushort uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  dVar2 = (double)param_1[3] * _DAT_5c98b940;
  uVar1 = *(ushort *)(*(int *)((int)this + 0x48) + 2);
  *(double *)((int)this + 0xa0) = dVar2;
  *(double *)((int)this + 0x98) = _DAT_5c98b988 - dVar2;
  iVar3 = MulDiv(*param_1,*(int *)(*(int *)((int)this + 0x48) + 4),100000);
  *(int *)((int)this + 0x54) = iVar3;
  if (iVar3 < 1) {
    *(undefined4 *)((int)this + 0x54) = 1;
  }
  iVar3 = MulDiv(param_1[1],*(int *)(*(int *)((int)this + 0x48) + 4),100000);
  *(int *)((int)this + 0x58) = iVar3;
  if (iVar3 < 1) {
    *(undefined4 *)((int)this + 0x58) = 1;
  }
  iVar3 = *(int *)((int)this + 0x58);
  dVar2 = (double)iVar3 * _DAT_5c98c668;
  *(double *)((int)this + 0x70) = dVar2;
  local_10 = SUB84(dVar2 + _DAT_5c98c660 + _DAT_5c98c658,0);
  local_10 = local_10 + 0x7ffffffe;
  *(int *)((int)this + 0x6c) = local_10;
  if (local_10 < 2) {
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0x3ff00000;
  }
  else {
    *(double *)((int)this + 0x70) = _DAT_5c98b988 / dVar2;
  }
  if (1 < uVar1) {
    iVar4 = param_1[2];
    *(int *)((int)this + 0x90) = iVar4;
    if (iVar4 != 0) {
      *(uint *)((int)this + 0x88) = (uint)(*(int *)((int)this + 0x8c) == 0);
      *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x68);
      if (*(int *)((int)this + 0x54) <= *(int *)((int)this + 0x68)) {
        *(undefined4 *)((int)this + 0x5c) = 0;
        iVar4 = *(int *)((int)this + 100) - *(int *)((int)this + 0x54);
        *(undefined4 *)((int)this + 0x88) = 0;
        *(int *)((int)this + 100) = iVar4;
        if (iVar4 < local_10) {
          dVar2 = (double)iVar4 * *(double *)((int)this + 0x70);
          *(double *)((int)this + 0x78) = dVar2;
          if (_DAT_5c98b988 < dVar2) {
            *(undefined4 *)((int)this + 0x78) = 0;
            *(undefined4 *)((int)this + 0x7c) = 0x3ff00000;
          }
        }
        else if (iVar3 - local_10 < iVar4) {
          dVar2 = _DAT_5c98b988 -
                  (double)((iVar4 - iVar3) + local_10) * *(double *)((int)this + 0x70);
          *(double *)((int)this + 0x78) = dVar2;
          if (dVar2 < _DAT_5c98b970) {
            *(undefined4 *)((int)this + 0x78) = 0;
            *(undefined4 *)((int)this + 0x7c) = 0;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x78) = 0;
          *(undefined4 *)((int)this + 0x7c) = 0x3ff00000;
        }
      }
      *(int *)((int)this + 100) = *(int *)((int)this + 0x60);
      if (*(int *)((int)this + 0x60) < iVar3) {
        *(undefined4 *)((int)this + 0x4c) = 1;
        return 0;
      }
      *(undefined4 *)((int)this + 0x78) = 0;
      *(undefined4 *)((int)this + 100) = 0;
      *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) - iVar3;
      *(undefined4 *)((int)this + 0x88) = 1;
      *(undefined4 *)((int)this + 0x4c) = 1;
      *(undefined4 *)((int)this + 0x7c) = 0;
      return 0;
    }
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x60);
    *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x68);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x84);
    *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((int)this + 0x8c);
  }
  *(undefined4 *)((int)this + 0x4c) = 1;
  return 0;
}


