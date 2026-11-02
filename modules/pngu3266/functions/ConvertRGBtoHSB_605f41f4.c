/* Module: pngu3266.dll
   Function: ConvertRGBtoHSB
   Address: 605f41f4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPNColor::ConvertRGBtoHSB(void) */

void __thiscall CPNColor::ConvertRGBtoHSB(CPNColor *this)

{
  CPNColor CVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CPNColor CVar7;
  CPNColor CVar8;
  CPNColor local_5;
  
                    /* 0x41f4  882  ?ConvertRGBtoHSB@CPNColor@@QAEXXZ */
  CVar1 = this[0x1c];
  CVar7 = this[0x1d];
  if ((byte)this[0x1d] < (byte)CVar1) {
    CVar7 = CVar1;
  }
  local_5 = this[0x1e];
  if (((byte)local_5 < (byte)CVar7) && (local_5 = this[0x1d], (byte)local_5 < (byte)CVar1)) {
    local_5 = CVar1;
  }
  CVar7 = this[0x1d];
  if ((byte)CVar1 < (byte)this[0x1d]) {
    CVar7 = CVar1;
  }
  CVar8 = this[0x1e];
  if (((byte)CVar7 < (byte)CVar8) && (CVar8 = this[0x1d], (byte)CVar1 < (byte)this[0x1d])) {
    CVar8 = CVar1;
  }
  fVar3 = (float)(byte)local_5;
  *(float *)(this + 0x18) = fVar3 * _DAT_606256e8;
  if (local_5 == (CPNColor)0x0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)(byte)((char)local_5 - (char)CVar8) / fVar3;
  }
  *(float *)(this + 0x14) = fVar4;
  if (*(float *)(this + 0x14) == _DAT_606256ec) {
    fVar3 = 0.0;
    goto LAB_605f4320;
  }
  fVar4 = (float)(byte)((char)local_5 - (char)CVar8);
  fVar5 = (fVar3 - (float)(byte)CVar1) / fVar4;
  fVar6 = (fVar3 - (float)(byte)this[0x1e]) / fVar4;
  fVar4 = (fVar3 - (float)(byte)this[0x1d]) / fVar4;
  if (CVar1 == local_5) {
    fVar4 = fVar4 - fVar6;
LAB_605f4300:
    *(float *)(this + 0x10) = fVar4;
  }
  else if (this[0x1e] == local_5) {
    *(float *)(this + 0x10) = (fVar5 - _DAT_606256f0) - fVar4;
  }
  else if (this[0x1d] == local_5) {
    fVar4 = (fVar6 - _DAT_606256f4) - fVar5;
    goto LAB_605f4300;
  }
  fVar3 = *(float *)(this + 0x10) * _DAT_606256f8;
  bVar2 = _DAT_606256ec <= fVar3;
  *(float *)(this + 0x10) = fVar3;
  if (bVar2) {
    return;
  }
  fVar3 = fVar3 - _DAT_606256fc;
LAB_605f4320:
  *(float *)(this + 0x10) = fVar3;
  return;
}


