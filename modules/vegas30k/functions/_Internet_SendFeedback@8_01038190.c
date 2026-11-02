/* Module: vegas30k.dll
   Function: _Internet_SendFeedback@8
   Address: 01038190
   Source: Ghidra pseudocode (Stage 10 batch) */


void _Internet_SendFeedback_8(undefined4 param_1,undefined4 param_2)

{
                    /* 0x38190  674  _Internet_SendFeedback@8 */
  _Internet_SendMail_16
            (param_1,param_2,s_SMTP_feedback_sonicfoundry_com_012051e8,
             s_SMTP_feedback_sonicfoundry_com_012051e8);
  return;
}


