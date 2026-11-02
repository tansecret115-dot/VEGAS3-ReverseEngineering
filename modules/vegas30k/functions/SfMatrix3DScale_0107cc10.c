/* Module: vegas30k.dll
   Function: SfMatrix3DScale
   Address: 0107cc10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMatrix3DScale(float,float,float,struct tSFMATRIX3D *) */

void SfMatrix3DScale(float param_1,float param_2,float param_3,tSFMATRIX3D *param_4)

{
  tSFMATRIX3D *ptVar1;
  int iVar2;
  
                    /* 0x7cc10  418  ?SfMatrix3DScale@@YGXMMMPAUtSFMATRIX3D@@@Z */
  iVar2 = 3;
  ptVar1 = param_4 + 0x20;
  do {
    iVar2 = iVar2 + -1;
    *(float *)(ptVar1 + -0x20) = param_1 * *(float *)(ptVar1 + -0x20);
    *(float *)(ptVar1 + -0x10) = param_2 * *(float *)(ptVar1 + -0x10);
    *(float *)ptVar1 = param_3 * *(float *)ptVar1;
    ptVar1 = ptVar1 + 4;
  } while (iVar2 != 0);
  return;
}


