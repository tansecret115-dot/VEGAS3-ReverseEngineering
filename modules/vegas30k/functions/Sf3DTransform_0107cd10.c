/* Module: vegas30k.dll
   Function: Sf3DTransform
   Address: 0107cd10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall Sf3DTransform(float * const,float * const,struct tSFMATRIX3D *) */

void Sf3DTransform(float *param_1,float *param_2,tSFMATRIX3D *param_3)

{
                    /* 0x7cd10  272  ?Sf3DTransform@@YGXQAM0PAUtSFMATRIX3D@@@Z */
  *param_2 = *param_1 * *(float *)param_3 +
             *(float *)(param_3 + 8) * param_1[2] +
             *(float *)(param_3 + 0xc) * param_1[3] + *(float *)(param_3 + 4) * param_1[1];
  param_2[1] = *(float *)(param_3 + 0x18) * param_1[2] +
               *(float *)(param_3 + 0x1c) * param_1[3] +
               *(float *)(param_3 + 0x14) * param_1[1] + *(float *)(param_3 + 0x10) * *param_1;
  param_2[2] = *(float *)(param_3 + 0x28) * param_1[2] +
               *(float *)(param_3 + 0x2c) * param_1[3] +
               *(float *)(param_3 + 0x24) * param_1[1] + *(float *)(param_3 + 0x20) * *param_1;
  param_2[3] = *(float *)(param_3 + 0x38) * param_1[2] +
               *(float *)(param_3 + 0x3c) * param_1[3] +
               *(float *)(param_3 + 0x34) * param_1[1] + *(float *)(param_3 + 0x30) * *param_1;
  return;
}


