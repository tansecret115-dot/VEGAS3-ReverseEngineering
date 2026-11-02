/* Module: vegas30k.dll
   Function: SfMatrix3DTranslateV
   Address: 0107cb50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMatrix3DTranslateV(float * const,struct tSFMATRIX3D *) */

void SfMatrix3DTranslateV(float *param_1,tSFMATRIX3D *param_2)

{
  tSFMATRIX3D local_40 [12];
  float local_34;
  float local_24;
  float local_14;
  
                    /* 0x7cb50  421  ?SfMatrix3DTranslateV@@YGXQAMPAUtSFMATRIX3D@@@Z */
  SfMatrix3DMakeIdentity(local_40);
  local_34 = *param_1;
  local_24 = param_1[1];
  local_14 = param_1[2];
  SfMatrix3DConcatenate(local_40,param_2);
  return;
}


