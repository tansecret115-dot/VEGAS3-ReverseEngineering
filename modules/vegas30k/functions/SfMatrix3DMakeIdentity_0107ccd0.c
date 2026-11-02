/* Module: vegas30k.dll
   Function: SfMatrix3DMakeIdentity
   Address: 0107ccd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMatrix3DMakeIdentity(struct tSFMATRIX3D *) */

void SfMatrix3DMakeIdentity(tSFMATRIX3D *param_1)

{
                    /* 0x7ccd0  416  ?SfMatrix3DMakeIdentity@@YGXPAUtSFMATRIX3D@@@Z */
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}


