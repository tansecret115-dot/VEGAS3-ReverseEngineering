/* Module: ednt3260.dll
   Function: FUN_630f5990
   Address: 630f5990
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f5990(void *this,short *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  short *psVar4;
  int local_c;
  
  sVar1 = 0;
  psVar4 = (short *)((int)this + (int)param_1 * 2 + 0xb01a);
  piVar3 = (int *)((int)this + (int)param_1 * 4 + 0x3fb46);
  local_c = 6;
  param_1 = (short *)((int)this + (int)param_1 * 0xc + 0xa37c);
  do {
    sVar1 = sVar1 + 1;
    if (*param_1 == 0) {
      *psVar4 = 0;
    }
    else if (sVar1 == 1) {
      *psVar4 = 3;
      sVar1 = 0;
    }
    else {
      if (sVar1 < 4) {
        uVar2 = FUN_630f5760(0,psVar4[0x42],*piVar3);
        sVar1 = (short)uVar2;
        if (sVar1 == 0) {
          *psVar4 = 1;
        }
        else {
          if ((sVar1 != 1) && (sVar1 != 2)) goto LAB_630f5a32;
          *psVar4 = 3;
        }
      }
      else {
        uVar2 = FUN_630f5760(0,psVar4[0x42],*piVar3);
        if (((short)uVar2 == 1) || ((short)uVar2 == 2)) {
LAB_630f5a32:
          *psVar4 = 2;
        }
        else {
          *psVar4 = 1;
        }
      }
      sVar1 = 0;
    }
    if ((psVar4[-0x2650] != 0) && (*psVar4 == 1)) {
      FUN_630f92d0();
    }
    param_1 = param_1 + -1;
    psVar4 = psVar4 + -5;
    piVar3 = piVar3 + -5;
    local_c = local_c + -1;
    if (local_c == 0) {
      return;
    }
  } while( true );
}


