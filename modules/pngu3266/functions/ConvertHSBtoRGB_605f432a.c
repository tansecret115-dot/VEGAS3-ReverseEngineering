/* Module: pngu3266.dll
   Function: ConvertHSBtoRGB
   Address: 605f432a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPNColor::ConvertHSBtoRGB(void) */

void __thiscall CPNColor::ConvertHSBtoRGB(CPNColor *this)

{
  CPNColor CVar1;
  char cVar2;
  
                    /* 0x432a  881  ?ConvertHSBtoRGB@CPNColor@@QAEXXZ */
  if (*(float *)(this + 0x14) == _DAT_606256ec) {
    CVar1 = (CPNColor)ftol();
    this[0x1d] = CVar1;
    this[0x1e] = CVar1;
    this[0x1c] = CVar1;
    goto LAB_605f44c2;
  }
  floor((double)(*(float *)(this + 0x10) * (float)_DAT_60625708));
  cVar2 = ftol();
  if (cVar2 == '\0') {
    CVar1 = (CPNColor)ftol();
    this[0x1c] = CVar1;
    CVar1 = (CPNColor)ftol();
LAB_605f44ae:
    this[0x1e] = CVar1;
LAB_605f44b4:
    CVar1 = (CPNColor)ftol();
  }
  else {
    if (cVar2 == '\x01') {
      CVar1 = (CPNColor)ftol();
      this[0x1c] = CVar1;
      CVar1 = (CPNColor)ftol();
      goto LAB_605f44ae;
    }
    if (cVar2 == '\x02') {
      CVar1 = (CPNColor)ftol();
      this[0x1c] = CVar1;
      CVar1 = (CPNColor)ftol();
      this[0x1e] = CVar1;
      goto LAB_605f44b4;
    }
    if (cVar2 == '\x03') {
      CVar1 = (CPNColor)ftol();
      this[0x1c] = CVar1;
    }
    else {
      if (cVar2 != '\x04') {
        if (cVar2 != '\x05') goto LAB_605f44c2;
        CVar1 = (CPNColor)ftol();
        this[0x1c] = CVar1;
        CVar1 = (CPNColor)ftol();
        this[0x1e] = CVar1;
        goto LAB_605f44b4;
      }
      CVar1 = (CPNColor)ftol();
      this[0x1c] = CVar1;
    }
    CVar1 = (CPNColor)ftol();
    this[0x1e] = CVar1;
    CVar1 = (CPNColor)ftol();
  }
  this[0x1d] = CVar1;
LAB_605f44c2:
  *(uint *)(this + 8) = (uint)CONCAT21(CONCAT11(this[0x1d],this[0x1e]),this[0x1c]);
  return;
}


