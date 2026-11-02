/* Module: mp3plug.dll
   Function: FUN_5f716fd4
   Address: 5f716fd4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f716fd4(void *this,float *param_1,float *param_2,float *param_3)

{
  *param_2 = (*(float *)((int)this + 0xb0) - *(float *)((int)this + 0xd4)) * *param_3 + *param_1;
  param_2[0x11] =
       (*(float *)((int)this + 0xb0) - *(float *)((int)this + 0xd4)) * param_3[0x11] + param_1[0x11]
  ;
  *param_1 = (*(float *)((int)this + 0xb0) + *(float *)((int)this + 0xd4)) * param_3[0x12];
  param_1[0x11] = (*(float *)((int)this + 0xb0) + *(float *)((int)this + 0xd4)) * param_3[0x23];
  param_2[1] = (*(float *)((int)this + 0xac) - *(float *)((int)this + 0xd0)) * param_3[1] +
               param_1[1];
  param_2[0x10] =
       (*(float *)((int)this + 0xac) - *(float *)((int)this + 0xd0)) * param_3[0x10] + param_1[0x10]
  ;
  param_1[1] = (*(float *)((int)this + 0xac) + *(float *)((int)this + 0xd0)) * param_3[0x13];
  param_1[0x10] = (*(float *)((int)this + 0xac) + *(float *)((int)this + 0xd0)) * param_3[0x22];
  param_2[2] = (*(float *)((int)this + 0xa8) - *(float *)((int)this + 0xcc)) * param_3[2] +
               param_1[2];
  param_2[0xf] = (*(float *)((int)this + 0xa8) - *(float *)((int)this + 0xcc)) * param_3[0xf] +
                 param_1[0xf];
  param_1[2] = (*(float *)((int)this + 0xa8) + *(float *)((int)this + 0xcc)) * param_3[0x14];
  param_1[0xf] = (*(float *)((int)this + 0xa8) + *(float *)((int)this + 0xcc)) * param_3[0x21];
  param_2[3] = (*(float *)((int)this + 0xa4) - *(float *)((int)this + 200)) * param_3[3] +
               param_1[3];
  param_2[0xe] = (*(float *)((int)this + 0xa4) - *(float *)((int)this + 200)) * param_3[0xe] +
                 param_1[0xe];
  param_1[3] = (*(float *)((int)this + 0xa4) + *(float *)((int)this + 200)) * param_3[0x15];
  param_1[0xe] = (*(float *)((int)this + 0xa4) + *(float *)((int)this + 200)) * param_3[0x20];
  param_2[4] = (*(float *)((int)this + 0xa0) - *(float *)((int)this + 0xc4)) * param_3[4] +
               param_1[4];
  param_2[0xd] = (*(float *)((int)this + 0xa0) - *(float *)((int)this + 0xc4)) * param_3[0xd] +
                 param_1[0xd];
  param_1[4] = (*(float *)((int)this + 0xa0) + *(float *)((int)this + 0xc4)) * param_3[0x16];
  param_1[0xd] = (*(float *)((int)this + 0xa0) + *(float *)((int)this + 0xc4)) * param_3[0x1f];
  param_2[5] = (*(float *)((int)this + 0x9c) - *(float *)((int)this + 0xc0)) * param_3[5] +
               param_1[5];
  param_2[0xc] = (*(float *)((int)this + 0x9c) - *(float *)((int)this + 0xc0)) * param_3[0xc] +
                 param_1[0xc];
  param_1[5] = (*(float *)((int)this + 0x9c) + *(float *)((int)this + 0xc0)) * param_3[0x17];
  param_1[0xc] = (*(float *)((int)this + 0x9c) + *(float *)((int)this + 0xc0)) * param_3[0x1e];
  param_2[6] = (*(float *)((int)this + 0x98) - *(float *)((int)this + 0xbc)) * param_3[6] +
               param_1[6];
  param_2[0xb] = (*(float *)((int)this + 0x98) - *(float *)((int)this + 0xbc)) * param_3[0xb] +
                 param_1[0xb];
  param_1[6] = (*(float *)((int)this + 0x98) + *(float *)((int)this + 0xbc)) * param_3[0x18];
  param_1[0xb] = (*(float *)((int)this + 0x98) + *(float *)((int)this + 0xbc)) * param_3[0x1d];
  param_2[7] = param_3[7] * (*(float *)((int)this + 0x94) - *(float *)((int)this + 0xb8)) +
               param_1[7];
  param_2[10] = (*(float *)((int)this + 0x94) - *(float *)((int)this + 0xb8)) * param_3[10] +
                param_1[10];
  param_1[7] = (*(float *)((int)this + 0x94) + *(float *)((int)this + 0xb8)) * param_3[0x19];
  param_1[10] = (*(float *)((int)this + 0x94) + *(float *)((int)this + 0xb8)) * param_3[0x1c];
  param_2[8] = (*(float *)((int)this + 0x90) - *(float *)((int)this + 0xb4)) * param_3[8] +
               param_1[8];
  param_2[9] = (*(float *)((int)this + 0x90) - *(float *)((int)this + 0xb4)) * param_3[9] +
               param_1[9];
  param_1[8] = (*(float *)((int)this + 0x90) + *(float *)((int)this + 0xb4)) * param_3[0x1a];
  param_1[9] = (*(float *)((int)this + 0x90) + *(float *)((int)this + 0xb4)) * param_3[0x1b];
  return;
}


