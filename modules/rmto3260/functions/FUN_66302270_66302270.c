/* Module: rmto3260.dll
   Function: FUN_66302270
   Address: 66302270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66302270(uint *param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_3;
  bVar2 = param_3[1];
  *param_1 = (uint)((bVar1 & 0x80) != 0);
  if ((bVar1 & 0x40) == 0x40) {
    *param_2 = CONCAT11(bVar1,bVar2) & 0x3fff;
    return 2;
  }
  *param_2 = CONCAT22(CONCAT11(*param_3,param_3[1]),CONCAT11(param_3[2],param_3[3]));
  return 4;
}


