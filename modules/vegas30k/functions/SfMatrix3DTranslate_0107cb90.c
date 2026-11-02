/* Module: vegas30k.dll
   Function: SfMatrix3DTranslate
   Address: 0107cb90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMatrix3DTranslate(float,float,float,struct tSFMATRIX3D *) */

void SfMatrix3DTranslate(float param_1,float param_2,float param_3,tSFMATRIX3D *param_4)

{
  tSFMATRIX3D local_40 [12];
  float local_34;
  float local_24;
  float local_14;
  
                    /* 0x7cb90  420  ?SfMatrix3DTranslate@@YGXMMMPAUtSFMATRIX3D@@@Z */
  SfMatrix3DMakeIdentity(local_40);
  local_34 = param_1;
  local_24 = param_2;
  local_14 = param_3;
  SfMatrix3DConcatenate(local_40,param_4);
  return;
}


