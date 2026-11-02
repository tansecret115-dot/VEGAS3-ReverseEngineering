/* Module: vegas30k.dll
   Function: _SfWheel_AutoScrollPtInOrigin@12
   Address: 01097c00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfWheel_AutoScrollPtInOrigin_12(int param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  BOOL BVar1;
  
                    /* 0x97c00  1292  _SfWheel_AutoScrollPtInOrigin@12 */
  pt.y = param_3;
  pt.x = param_2;
  BVar1 = PtInRect((RECT *)(param_1 + 0x34),pt);
  return BVar1 != 0;
}


