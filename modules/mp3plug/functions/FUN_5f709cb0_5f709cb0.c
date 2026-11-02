/* Module: mp3plug.dll
   Function: FUN_5f709cb0
   Address: 5f709cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f709cb0(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *in_EAX;
  
  fVar1 = in_EAX[8] + *in_EAX;
  fVar2 = *in_EAX - in_EAX[8];
  fVar3 = in_EAX[7] + in_EAX[1];
  fVar6 = in_EAX[1] - in_EAX[7];
  fVar5 = in_EAX[6] + in_EAX[2];
  fVar7 = in_EAX[2] - in_EAX[6];
  fVar4 = in_EAX[5] + in_EAX[3];
  fVar8 = in_EAX[3] - in_EAX[5];
  *param_2 = fVar5 + in_EAX[4] + fVar4 + fVar3 + fVar1;
  param_2[2] = _DAT_5f74b588 * fVar2 +
               _DAT_5f74b58c * fVar6 + _DAT_5f74b594 * fVar8 + _DAT_5f74b590 * fVar7;
  param_2[4] = (_DAT_5f74b5ac * fVar1 +
               _DAT_5f74b5b0 * fVar3 + _DAT_5f74b5b8 * fVar4 + _DAT_5f74b5b4 * fVar5) - in_EAX[4];
  param_2[6] = ((fVar2 - fVar7) - fVar8) * _DAT_5f74b5d0;
  param_2[8] = _DAT_5f74b5f4 * fVar1 +
               _DAT_5f74b5f8 * fVar3 + _DAT_5f74b600 * fVar4 + _DAT_5f74b5fc * fVar5 + in_EAX[4];
  param_2[10] = _DAT_5f74b618 * fVar2 +
                _DAT_5f74b61c * fVar6 + _DAT_5f74b624 * fVar8 + _DAT_5f74b620 * fVar7;
  param_2[0xc] = (_DAT_5f74b63c * fVar1 +
                 _DAT_5f74b640 * fVar3 + _DAT_5f74b648 * fVar4 + _DAT_5f74b644 * fVar5) - in_EAX[4];
  param_2[0xe] = _DAT_5f74b660 * fVar2 +
                 _DAT_5f74b664 * fVar6 + _DAT_5f74b66c * fVar8 + _DAT_5f74b668 * fVar7;
  param_2[0x10] =
       _DAT_5f74b684 * fVar1 +
       _DAT_5f74b688 * fVar3 + _DAT_5f74b690 * fVar4 + _DAT_5f74b68c * fVar5 + in_EAX[4];
  return;
}


