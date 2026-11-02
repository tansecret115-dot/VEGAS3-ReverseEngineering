/* Module: vegas30k.dll
   Function: SfMatrix3DScaleV
   Address: 0107cbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMatrix3DScaleV(float * const,struct tSFMATRIX3D *) */

void SfMatrix3DScaleV(float *param_1,tSFMATRIX3D *param_2)

{
  tSFMATRIX3D *ptVar1;
  int iVar2;
  
                    /* 0x7cbd0  419  ?SfMatrix3DScaleV@@YGXQAMPAUtSFMATRIX3D@@@Z */
  iVar2 = 3;
  ptVar1 = param_2 + 0x20;
  do {
    iVar2 = iVar2 + -1;
    *(float *)(ptVar1 + -0x20) = *(float *)(ptVar1 + -0x20) * *param_1;
    *(float *)(ptVar1 + -0x10) = param_1[1] * *(float *)(ptVar1 + -0x10);
    *(float *)ptVar1 = *(float *)ptVar1 * param_1[2];
    ptVar1 = ptVar1 + 4;
  } while (iVar2 != 0);
  return;
}


