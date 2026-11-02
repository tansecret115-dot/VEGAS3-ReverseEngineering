/* Module: mp3plug.dll
   Function: FUN_5f691be0
   Address: 5f691be0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5f691be0(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 & 0x7ff) == 0x7ff) &&
     ((((uVar1 & 0x1800) == 0x1800 || ((uVar1 & 0x1800) == 0x1000)) && ((uVar1 & 0x6000) == 0x2000))
     )) {
    uVar1 = param_1[1] & 0xf;
    if ((uVar1 != 0) && (uVar1 < 0xf)) {
      return (bool)('\x01' - (0x20 < ((byte)param_1[1] & 0x30)));
    }
  }
  return false;
}


