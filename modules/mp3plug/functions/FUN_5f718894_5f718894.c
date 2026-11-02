/* Module: mp3plug.dll
   Function: FUN_5f718894
   Address: 5f718894
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5f718894(void *this,uint param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_5c;
  float *local_58;
  
  iVar10 = -0x200;
  fVar6 = (float)_DAT_5f766288;
  fVar2 = (float)_DAT_5f766290;
  fVar3 = (float)_DAT_5f766298;
  fVar1 = (float)_DAT_5f7662a0;
  local_58 = (float *)&DAT_5f765990;
  uVar8 = param_1;
  while( true ) {
    uVar11 = uVar8 + 0x20 & 0x1ff;
    fVar1 = local_58[2] * *(float *)((int)this + uVar11 * 4 + 0x44) +
            *(float *)((int)this + uVar8 * 4 + 0x44) * *local_58 + fVar1;
    fVar2 = local_58[2] * *(float *)((int)this + uVar11 * 4 + 0x844) +
            *local_58 * *(float *)((int)this + uVar8 * 4 + 0x844) + fVar2;
    fVar3 = *(float *)((int)this + uVar11 * 4 + 4) * local_58[3] + fVar3;
    fVar5 = local_58[3] * *(float *)((int)this + uVar11 * 4 + 0x804);
    local_58 = local_58 + 4;
    uVar8 = uVar11 + 0x20 & 0x1ff;
    iVar10 = iVar10 + 0x40;
    if (iVar10 == 0) break;
    fVar6 = fVar5 + fVar6;
  }
  fVar4 = (float)_DAT_5f7662b0;
  *param_2 = fVar1 * (float)_DAT_5f7662a8;
  fVar1 = (float)_DAT_5f7662b8;
  fVar7 = (float)_DAT_5f7662c0;
  param_2[0x20 >> ((byte)*(undefined4 *)((int)this + 0x1008) & 0x1f)] = fVar3 * fVar4;
  param_2[1] = fVar2 * fVar1;
  iVar10 = 1;
  param_2[(0x20 >> ((byte)*(undefined4 *)((int)this + 0x1008) & 0x1f)) + 1] =
       (fVar5 + fVar6) * fVar7;
  local_5c = *(undefined4 *)((int)this + 0x1008);
  if (1 < 0x10 >> ((byte)local_5c & 0x1f)) {
    do {
      iVar9 = 1 << ((byte)local_5c & 0x1f);
      fVar6 = (float)_DAT_5f7662c8;
      fVar2 = (float)_DAT_5f7662d0;
      fVar3 = (float)_DAT_5f7662d8;
      fVar1 = (float)_DAT_5f7662e0;
      local_58 = local_58 + iVar9 * 0x20 + -0x20;
      uVar8 = iVar9 * iVar10 + param_1;
      iVar9 = -0x200;
      while( true ) {
        uVar11 = uVar8 + 0x20 & 0x1ff;
        fVar1 = local_58[2] * *(float *)((int)this + uVar11 * 4 + 4) +
                *(float *)((int)this + uVar8 * 4 + 0x44) * *local_58 + fVar1;
        fVar2 = local_58[2] * *(float *)((int)this + uVar11 * 4 + 0x804) +
                *local_58 * *(float *)((int)this + uVar8 * 4 + 0x844) + fVar2;
        fVar3 = *(float *)((int)this + uVar11 * 4 + 4) * local_58[3] +
                *(float *)((int)this + uVar8 * 4 + 0x44) * local_58[1] + fVar3;
        fVar5 = local_58[3] * *(float *)((int)this + uVar11 * 4 + 0x804);
        fVar6 = local_58[1] * *(float *)((int)this + uVar8 * 4 + 0x844) + fVar6;
        local_58 = local_58 + 4;
        uVar8 = uVar11 + 0x20 & 0x1ff;
        iVar9 = iVar9 + 0x40;
        if (iVar9 == 0) break;
        fVar6 = fVar5 + fVar6;
      }
      param_2[iVar10 * 2] = fVar1 * (float)_DAT_5f7662e8;
      fVar1 = (float)_DAT_5f7662f8;
      fVar4 = (float)_DAT_5f766300;
      iVar9 = iVar10 + 1;
      param_2[((0x20 >> ((byte)*(undefined4 *)((int)this + 0x1008) & 0x1f)) - iVar10) * 2] =
           fVar3 * (float)_DAT_5f7662f0;
      param_2[iVar10 * 2 + 1] = fVar2 * fVar1;
      param_2[((0x20 >> ((byte)*(undefined4 *)((int)this + 0x1008) & 0x1f)) - iVar10) * 2 + 1] =
           (fVar5 + fVar6) * fVar4;
      local_5c = *(undefined4 *)((int)this + 0x1008);
      iVar10 = iVar9;
    } while (iVar9 < 0x10 >> ((byte)local_5c & 0x1f));
  }
  return;
}


